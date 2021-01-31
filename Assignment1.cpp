#include <iostream>

using namespace std;

int main()
{

   string tryAgain="YES";"Yes";"yes";

  do{
  string customerName;
  const double vat=0.12;
  int ID;
  double vatAmount,totalCost,Balance,AmountPaid;

  int quantity;
  double money;
  string buy;
  string print="Printer";
  string phone="Phone";
  string table="Table";

  double printprice=50;
  double phoneprice=80;
  double tableprice=100;

  cout<<"WELCOME TO EMMANUEL SUPERMARKET"<<endl;
  cout<<"........................................"<<endl;

  cout<<endl;

  cout<<"Please enter your name"<<endl;
  cin>>customerName;

  cout<< "" <<endl;

  cout<<"Hello "<<customerName<<" these are the items available in stock in our supermarket"<<endl;
  cout<<"A.Printer---50cedis"<<endl;
  cout<<"B.Phone----80cedis"<<endl;
  cout<<"C.Table----100cedis"<<endl;
  cout<<endl;

  cout<<"Enter your ID #NOTE: ID Should be digits only."<<endl;
  cin>>ID;

  cout<<"What do you want to buy? ENTER NAME OF ITEM"<<endl;
  cin>>buy;

  cout<<"Enter the quantity you want to buy"<<endl;
  cin>>quantity;

  cout<<"How much do you have on you?"<<endl;
  cin>>money;



    if (money<printprice || money<phoneprice || money<tableprice){
        cout<<"you cant buy"<<endl;
  cout<<"Do you want to try again?"<<endl;
  cin>>tryAgain;
  }

 else if (!money==printprice||!money==phoneprice||!money==tableprice){
        cout<<"YOU CANT BUY !"<<endl;
  cout <<"Do you want to try again? Enter,'Yes'"<<endl;
  cin>>tryAgain;

  }

    else if (buy=="PHONE" || buy=="phone" || buy=="Phone") {
    vatAmount = phoneprice*quantity * vat;
    totalCost=phoneprice*quantity+vatAmount;
    Balance=money-totalCost;

    cout<<"Customer's Name:"<<customerName<<endl;
    cout<<"Unique ID:"<<ID<<endl;
    cout<<"Item Bought:"<<buy<<endl;
    cout<<"Quantity bought:"<<quantity<<endl;
    cout<<"Total cost:"<<totalCost<<endl;
    cout<<"Total amount paid:"<<money<<endl;
    cout<<"Balance:"<<Balance<<endl;
    cout<<"THANK YOU FOR TRANSACTING WITH US."<<endl;
       cout<<"Do you want to buy again?"<<endl;
        cin>>tryAgain;

    }
     else if (buy=="PRINTER" || buy=="printer" || buy=="Printer") {
    vatAmount = printprice*quantity * vat;
    totalCost=printprice*quantity+vatAmount;
    Balance=money-totalcost;


    cout<<"Customer's Name:"<<customerName<<endl;
    cout<<"Unique ID:"<<ID<<endl;
    cout<<"Item Bought:"<<buy<<endl;
    cout<<"Quantity bought:"<<quantity<<endl;
    cout<<"Total cost:"<<totalCost<<endl;
    cout<<"Total amount paid:"<<money<<endl;
    cout<<"Balance:"<<Balance<<endl;

      cout<<"THANK YOU FOR TRANSACTING WITH US."<<endl;
       cout<<"Do you want to buy again?"<<endl;
        cin>>tryAgain;
    }
     else if (buy=="TABLE" || buy=="Table" || buy=="table") {
    vatAmount = tableprice*quantity * vat;
    totalCost=tableprice*quantity+vatAmount;
    Balance=money-totalCost;


    cout<<"Customer's Name:"<<customerName<<endl;
    cout<<"Unique ID:"<<ID<<endl;
    cout<<"Item Bought:"<<buy<<endl;
    cout<<"Quantity bought:"<<quantity<<endl;
    cout<<"Total cost:"<<totalCost<<endl;
    cout<<"Total amount paid:"<<money<<endl;
    cout<<"Balance:"<<Balance<<endl;

    cout<<"THANK YOU FOR TRANSACTING WITH US."<<endl;
       cout<<"Do you want to buy again?"<<endl;
       cin>>tryAgain;

    }
       else{
        cout << buy << " not available" << endl;

        cout<<"TRY ANOTHER ITEM"<<endl;
       }

        } while(tryAgain=="Yes" || tryAgain=="yes" || tryAgain=="YES");

   return 0;
  }
