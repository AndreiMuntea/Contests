// https://codeforces.com/gym/100810/problem/C
// https://codeforces.com/gym/100810/submission/18234771

#include <iostream>
#include <string.h>
using namespace std;

int vals( const string& str){
    int nr = 0;
    int i = 0;
    int size = str.size();

    while (i < size && str[i] == 'M')nr+=1000,i++;
    if (i < size && i+1 < size && str[i] == 'C' && str[i + 1] == 'M') nr+=900, i+=2;
    if (i < size && str[i] == 'D') nr += 500, i++;
    if (i < size && i+1 < size && str[i] == 'C' && str[i + 1] == 'D') nr+=400, i+=2;
    while (i < size && str[i] == 'C')nr+=100,i++;
    if (i < size && i+1 < size && str[i] == 'X' && str[i + 1] == 'C') nr+=90, i+=2;
    if (i < size && str[i] == 'L') nr += 50, i++;
    if (i < size && i+1 < size && str[i] == 'X' && str[i + 1] == 'L') nr+=40, i+=2;
    while (i < size && str[i] == 'X')nr+=10,i++;
    if (i < size && i+1 < size && str[i] == 'I' && str[i + 1] == 'X') nr+=9, i+=2;
    if (i < size && str[i] == 'V') nr += 5, i++;
    if (i < size && i+1 < size && str[i] == 'I' && str[i + 1] == 'V') nr+=4, i+=2;
    while (i < size && str[i] == 'I')nr+=1,i++;
    if (i < size && str[i] == 'O') nr = 0;

    return nr;
}

string roman(int val){
    string roman = "";

    while (val >= 1000) roman+="M", val-=1000;
    if (val >= 900) roman +="CM", val-=900;
    if (val >= 500) roman+="D", val-=500;
    if (val >= 400) roman+="CD",val-=400;
    while (val >= 100) roman+="C",val-=100;
    if (val >= 90) roman+="XC",val-=90;
    if (val >= 50) roman+="L",val-=50;
    if (val >= 40) roman+="XL",val-=40;
    while (val >= 10)roman+="X",val-=10;
    if (val>=9) roman+="IX", val-=9;
    if (val>=5) roman+="V", val-=5;
    if (val>=4) roman+="IV", val-=4;
    while (val >= 1) roman+="I",val--;
    if (roman == "" && val == 0) roman = "O";
    return roman;
}

bool is_digit(char c){
    return (c == '0' || c=='1' || c =='2' ||c == '3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9');
}

int main()
{
     string line = "";
     int v[10];
     for (int i = 0; i< 10; i++) v[i] = -1;

     while (line != "QUIT"){
        cin>>line;
        if (line == "RESET"){
            cout<<"Ready\n";
            for (int i = 0; i< 10; i++) v[i] = -1;
        }
        else if (line == "QUIT"){
            cout<<"Bye\n";
        }
        else{
            int registru = line[0] - 48;
            int val = 0;
            char op = '+';
            int i = 2;
            bool ok = true;
            if (line[2] == '-' || line[2] == '+'){
                cout<<"Error\n";
            }else{
                while (i < line.size() && ok){
                    string expr = "";
                    while(i < line.size() && !is_digit(line[i]) && line[i] != '+' && line[i] !='-'){
                            expr+=line[i];
                            i++;
                    }
                    if (expr == ""){
                        if (is_digit(line[i])){
                            int cifra = line[i] - 48;
                            if (v[cifra] == -1){
                                  ok = false;
                            }
                            else{
                                if (op =='+') val+=v[cifra];
                                else val-=v[cifra];
                            }
                        }
                        else op = line[i];
                        i++;
                    } else{
                        if (op =='+') val+=vals(expr);
                        else val-=vals(expr);
                    }
                }
                if (val < 0 || val > 10000) ok = false;
                if (!ok) cout<<"Error\n";
                else{
                     v[registru] = val;
                     cout<<registru<<"="<<roman(val)<<"\n";
                }
            }


        }
     }

    return 0;
}