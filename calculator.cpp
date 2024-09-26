#include <iostream>
using namespace std;

void showMenu(){
    cout<<"\n==== Simple Calculator ==="<<endl;
    cout<<"1.Addition (+)"<<endl;
    cout<<"2.Substraction (-)"<<endl;
    cout<<"3.Mutiplication (*)"<<endl;
    cout<<"4.Division (/)"<<endl;
    cout<<"5.Exit"<<endl;
}

float calculate(int choice, float num1, float num2){
    switch (choice)
    {
    case 1:
        return num1 + num2;
    case 2:
        return num1 - num2;
    case 3:
        return num1 * num2;
    case 4:
        if(num2!=0)
            return num1/num2;
        else{
            cout<<"Error! Division by zero.\n";
            return 0;
        } 

    default:
        cout<<"Invalid choice!"<<endl;
        return 0;
    }
}

float InputTwoDigitNum(const string &prompt){
    float num;
    while(true){
        cout<< prompt;
        cin >> num;
        if((num >= 10 && num <= 99) || (num >=-10 && num<=-99)){
            break;
        }else{
            cout<<"Invalid input! please enter two digit number"<<endl;
        }
    }
    return num;
}

int main(){
    int choice;
    float num1, num2, result;

    do{
        showMenu();
        cout<<"Choose as Opration(1 to 5) ";
        cin >> choice;

        if (choice == 5){
            cout << "Existing the Calculator. Goodbye!"<<endl;
            break;
        }

        num1 = InputTwoDigitNum("Enter a first two-digit number(10 to 99 and -10 to -99) ");
        num2 = InputTwoDigitNum("Enter a Second two-digit number(10 to 99 and -10 to -99) ");

        result = calculate(choice, num1, num2);
        if(choice >= 1 && choice <=4){
            cout<<"Result: "<<result<<endl;
        }

    }
    while(choice != 5);
    return 0;
}
