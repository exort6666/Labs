#include <iostream>
#include <string>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "rus");

    std::ifstream in("input.txt", std::ios::in);
    std::ofstream out("output.txt", std::ios::out); 
    char c;
    char k;
    int j = 0;
    int N;
    bool bel = false;
    bool not_bel = false;
    char word[1000][1000] = {'\0'};
    char str[1000] = { '\0' };
    in >> c >> k;
    in >> N;
    while (!in.eof()) {   
        in >> str;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] >= 'À' && str[i] <= 'ÿ') {
                if (str[i] == c) {
                    bel = true;
                }
                if (str[i] != k) {
                    not_bel = true;
                }
                if (str[i] == k) {
                    not_bel = false;
                    break;
                }
            }
        }
        if (bel && not_bel) {
            for (int i = 0; str[i] >= 'À', str[i] <= 'ÿ'; i++) {
                word[j][i] = str[i];
            }
            j++;
    }
        bel = false;
        not_bel = false;
    }
    for (int i = 0; i < j; i++) {
        for (int s = i + 1; s < j; s++) {
            int ind = 0;
            if (strlen(word[i]) < strlen(word[s])) {
                while (word[i][ind] || word[s][ind]) {
                    char let = word[i][ind];
                    word[i][ind] = word[s][ind];
                    word[s][ind] = let;
                    ind++;
                }
            }
        }
      
    }
    for (int i = 0; i < N; i++) {
         for (int s = 0; s < strlen(word[i]); s++) {
            out << word[i][s];
         }
         out << std::endl;
         if (!(strcmp(word[i], word[i + 1]))) {
             break;
         }
    }
    in.close();
    out.close();
    return 0;
}


