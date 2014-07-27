using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char * argv[]){
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 != s2) {
        cout << std::max(s1, s2) << endl;
        //cout << std::max(s1, s2, [](string s1, string s2){ return s1.length() < s2.length(); }) << endl;
        cout << (s1.length() > s2.length() ? s1 : s2) << endl;
    }
    return 0;
}
