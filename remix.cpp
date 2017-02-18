#include <fstream>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/replace.hpp>
using namespace std;
using namespace boost;

int main(int argc, char const *argv[]) {
  if (argc > 1) {
    ifstream infile (argv[1]);
    stringstream filebuf;
    filebuf << infile.rdbuf();
    string outstr = "";
    outstr += filebuf.str();
    replace_all(outstr, "str", "string");
    replace_all(outstr, "imain", "int main (int argc, char const *argv[]){\n");
    outstr = "#include <iostream>\n#include <string>\n#include <vector>\n#include <algorithm>\n#include <iostream>\n#include <fstream>\nusing namespace std;\n" + outstr;
    ofstream outfile ("remix.out.cpp");
    outfile << outstr;
    outfile.close();
    system("g++ remix.out.cpp -o remix.out");
  } else {
    cout << "Remix: Not Enough Arguments" << endl;
  }
  return 0;
}
