    #include <bits/stdc++.h>  
    using namespace std;
     
     
    signed main()
    {
        int t;
        (cin >> t).get();
        while (t--) {
            string str;
     
            getline(cin, str);
            getline(cin, str);
            stringstream split(str);
            string each;
            vector <string> tokens;
            while (getline(split, each, ' ')) {
                ///scan each part of stream;
                tokens.push_back(each);
     
            }
            int ind = -1;
            for (int i = 0; i < tokens.size(); i++) {
                string temp;
                temp = tokens[i];
                for (int j = 0; j < temp.length(); j++) {
                    if (temp[j] == 'm') {
                        ind = i;
                        break;
                    }
     
                }
                if (ind != -1)
                    break;
            }
            int i1, i2;
            string str1;
            if (ind == 0) {
                i1 = stoi(tokens[2]);
                i2 = stoi(tokens[4]);
                int result = i2 - i1;
                cout << result << " + " << i1 << " = " << i2 << "\n";
                //break;
            }
            else if (ind == 2) {
                i1 = stoi(tokens[0]);
                i2 = stoi(tokens[4]);
                int result;
                result = i2 - i1;
                cout << i1 << " + " << result << " = " << i2 << "\n";
                //break;
            }
            else if (ind == 4) {
                i1 = stoi(tokens[0]);
                i2 = stoi(tokens[2]);
                int result = i1 + i2;
                cout << i1 << " + " << i2 << " = " << result << "\n";
                //break;
            }
            tokens.clear();
            str.erase();
        }
        return 0;
    } 