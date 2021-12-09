// theoCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>//to Accept input and output
#include <string>// to accept string
using namespace std;//to remove std


void solution2(float solut1, int iinput3, string symbol) {//this is a function that wil only run when it is called and it accepts only three parameter
    float solu2;//saving the final solution

    if (symbol == "+") {//check if symbol is '+'
        solu2 = solut1 + iinput3;//if its symb1 is '+' it will add solut1(parametet) to input3(parameter) and save it in solu1
        cout << "\nFinal answer is " << solu2<< "\n\n\n";//output final answer

    }
    else if (symbol == "-")//check if symbol 1 is '-'
    {
        solu2 = solut1 - iinput3;//if its symb1 is '-' it will minus solut1(parametet) from input3 and save it in solu1
        cout << "\nFinal answer is " << solu2 << "\n\n\n";//output final answer

    }
    else if (symbol == "*")//check if symbol 1 is '*'
    {
        solu2 = solut1 * iinput3;//if its symb1 is '*' it will multiply solut1(parametet) by input3 and save it in solu1
        cout << "\nFinal answer is " << solu2 << "\n\n\n";//output final answer

    }
    else if (symbol == "/")//check if symbol 1 is '/'
    {
        solu2 = solut1 / iinput3;//if its symb1 is '/' it will divide solut1(parametet) by input3 and save it in solu1
        cout << "\nFinal answer is " << solu2 << "\n\n\n";//output final answer

    }
    else //now if the user doesnt put any of the symbol it will say this
    {
        cout << "\nwrong input\n";//it will output wrong input
    }

}
int main()//main function
{
    cout << "---Three input calculator===\n"<<"NOTE DONT PUT LETTERS FOR NUMBER\n";
   
    string int1, int2, int3, symb1, symb2;//this is an empty variables of type string
    
    //cout << "\n calculate below \n";//output calculator below "\n means new line"
    cout << "\nfirst number: ";//output first number
    cin>>int1;//accept input from user nd put it inside inp
    cout << "\nsymbol: ";//output symbol 
    cin >> symb1;//accepting input from user to put symb1 as symbol 1
    cout << "\nsecond number: ";//output second number
    cin >> int2;//accept input from user nd put it inside inp
    cout << "\nsymbol: ";//output symbol 
    cin >> symb2;//accepting input from user to put symb1 as symbol 2
    cout << "\nthird number: ";//output third number
    cin >> int3;//accept input from user nd put it inside int3

    
    int inp1str = stoi(int1);//converting int1 to Int
    int inp2str = stoi(int2);//converting int2 to Int
    int inp3str = stoi(int3);//converting int3 to Int
    
    float solu1; //solving first set (inp1str and inp2str) variable---with float datatype which is decimal
    if (symb1 == "+") {//check if symbol 1 is '+'
        cout << "\n" << int1 << symb1 << int2 << symb2 << int3;//outputs the values added

        solu1 = inp1str + inp2str;//if its symb1 is '+' it will add inp1 to inp2 and save it in solu1
        solution2(solu1, inp3str, symb2);//calling the function
    }
    else if (symb1 == "-")//check if symbol 1 is '-'
    {
        cout << "\n" << int1 << symb1 << int2 << symb2 << int3;//outputs the values added

        solu1 = inp1str - inp2str;//if its symb1 is '-' it will minus inp1 from inp2 and save it in solu1
        solution2(solu1, inp3str, symb2);//calling the function
    }
    else if (symb1 == "*")//check if symbol 1 is '*'
    {
        cout << "\n" << int1 << symb1 << int2 << symb2 << int3;//outputs the values added

        solu1 = inp1str * inp2str;//if its symb1 is '*' it will multiply inp1 by inp2 and save it in solu1
        solution2(solu1, inp3str, symb2);//calling the function
    }
    else if (symb1 == "/")//check if symbol 1 is '/'
    {
        cout << "\n" << int1 << symb1 << int2 << symb2 << int3;//outputs the values added

        solu1 = inp1str / inp2str;//if its symb1 is '/' it will divide inp1 by inp2 and save it in solu1
        solution2(solu1, inp3str, symb2);//calling the function
    }
    else //now if the user doesnt put any of the symbol it will say this
    {
        cout << "\nwrong input\n";//it will output wrong input
    }


}
