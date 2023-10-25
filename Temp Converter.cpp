#include <iostream>
using namespace std;

float ToFahrenheit(float celsius){
    float fahrenheit=(celsius*9.0)/5.0+32;
    return fahrenheit;
}


float ToCelsius(float fahrenheit){
    float celsius=(fahrenheit-32.0)*5.0/9.0;
    return celsius;
}

main(){
    cout << "----------Temperature Converter---------" << endl;
    int choice;
    float fahrenheit,celsius;
    

    while (true){
        cout<<"Press 1 to Convert Fahrenheit to Celsius"<<endl<<"Press 2 to Convert Celsius to Fahrenheit"<<endl<<"Press 0 to Exit"<<endl;
        cin>>choice;
        if(choice==0){
            cout<<"Goodbye!"<<endl;
            break;
            
        }

        switch(choice){
            case 1:
                cout<<"Convert to Celsius"<<endl;
                cout<<"Enter the temperature in Fahrenheit: ";
                cin >> fahrenheit;
                cout<<"Result: "<<ToCelsius(fahrenheit)<<" degrees Celsius"<<endl;
                break;
                
            case 2:
                cout << "Convert to Fahrenheit" << endl;
                cout << "Enter the temperature in Celsius: ";
                cin >> celsius;
                cout<<"Result: "<<ToFahrenheit(celsius)<<" degrees Fahrenheit"<<endl;
                break;

            default:
                cout<<"Invalid Choice Entered!!"<<endl;
                break;
        }
    }
}

