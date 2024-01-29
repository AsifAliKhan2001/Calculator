
//  Created by Asif Khan on 2022-07-22.


#include <iostream>
using namespace std;
int main()

{
    int a,b,c,d;
    int num;
    int top,bottom;
    int smaller;
    int i, gcd = 1;
    
    for( ; ; )
    {
        cout<<"enter first fraction numerator and denonimator " << endl;
        cin>> a;
        cin>> b;
        if(b == 0){
            cout<< "Error denominator can not be zero " << endl;
            continue;
            
        }
            else {
                cout<< endl;
        }
            cout<< "enter second fraction numerator and denominator" << endl;
        cin >> c;
        cin >> d;
        
        if(d == 0){
            cout<< "Error denominator can not be zero "<< endl;
            continue;
        }
            else{
                cout<< endl;
            }
            
        for( ; ; ){
            
            cout<< " Input: 1 for addition , 2 for subtraction , 3 for multiplication , 4 for division" << endl;
            
            cin>> num;
            
            if(num==1){
                top = a*d + c*b;
                bottom = (b*d);
                
                if(top<=bottom)
                    smaller = top;
                else
                    smaller = bottom;
                
                for(i=1; i<=smaller; i++)
                {
                    if((bottom % i == 0) && (top % i == 0)){
                        gcd = i;
                }
                }
                
                if (top == bottom ){
                    cout<< a<< "/" << b << " + " << c << "/" << d << " = " << top/gcd << endl;
                cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;
                    
                }
                else{
                    exit(1);
                }
            }
                else if (top%bottom == 0){
                    cout<< a<< "/" << b << " + " << c << "/" << d << " = " << top/bottom << endl;
                
                    cout<< "Input: 0 to quit or any number to continue " <<endl;
                    cin>> num;
                    if(num != 0){
                        break;
                        
                    }
                    else{
                        exit(1);
                    }
                }

                cout<< a<< "/" << b << " + " << c << "/" << d << " = " << top/gcd << "/" << bottom/gcd << endl ;
                cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;
                    
                }
                else{
                    exit(1);
                }
            }
            else if(num==2){
                top = a*d - c*b;
                bottom = (b*d);
                
                if(top<=bottom)
                    smaller = top;
                else
                    smaller = bottom;
                
                for(i=1; i<=smaller; i++)
                {
                    if((bottom % i == 0) && (top % i == 0)){
                        gcd = i;
                }
                    
                }
           if (top == 0 ){
           cout<< a<< "/" << b << " - " << c << "/" << d << " = " << top << endl;
           cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;
                    
                }
                else{
                    exit(1);
                }
            }
           
            else if (top%bottom == 0){
                cout<< a<< "/" << b << " - " << c << "/" << d << " = " << top/bottom << endl;
            
                cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;
                    
                }
                else{
                    exit(1);
                }
            }
                cout<< a<<"/"<<b<<" - "<<c<<"/"<<d<<" = "<<top/gcd <<"/"<<bottom/gcd<< endl;
                cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;}
                else{
                    exit(1);
               }
               }
            else if(num==3){
                top = a*c;
                bottom = b*d;
                 
                if(top<=bottom)
                    smaller = top;
                else
                    smaller = bottom;
                
                for(i=1; i<=smaller; i++)
                {
                    if((bottom % i == 0) && (top % i == 0)){
                        gcd = i;
                }
                }
    
                cout <<a<<"/"<<b<<" * "<<c<<"/"<< d << " = " <<top/gcd<<"/"<<bottom/gcd<<endl ;
                cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;
                }
                else{
                    exit(1);
                }
            }

            else if(num ==4){
                
                if(c==0){
                    cout<< "Error can not divide by zero "<< endl;
                    break;
                }
                top = a*d;
                bottom = c*b;
                
                if(top<=bottom)
                    smaller = top;
                else
                    smaller = bottom;
                
                for(i=1; i<=smaller; i++)
                {
                    if((bottom % i == 0) && (top % i == 0)){
                        gcd = i;
                }
                    
                }
                if(top == bottom){
                    cout<<a<<"/"<<b<<" / "<<c<<"/"<<d<<" = "<< top/bottom<< endl;
                    cout<< "Input: 0 to quit or any number to continue " <<endl;
                    cin>> num;
                    if(num != 0){
                        break;}
                    else{
                        exit(1);
                }
                }
                else if(top%bottom == 0){
                    cout<<a<<"/"<<b<<" / "<<c<<"/"<<d<<" = "<< top/bottom<< endl;
                    cout<< "Input: 0 to quit or any number to continue " <<endl;
                    cin>> num;
                    if(num != 0){
                        break;}
                    else{
                        exit(1);
                }
                }
                    
                    
                cout<<a<<"/"<<b<<" / "<<c<<"/"<<d<<" = "<< top/gcd << "/" << bottom/gcd << endl;
                cout<< "Input: 0 to quit or any number to continue " <<endl;
                cin>> num;
                if(num != 0){
                    break;}
                else{
                    exit(1);
            }
        }
        }
    }
return 0;
    }
