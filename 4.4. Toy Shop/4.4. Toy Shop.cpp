// не работи правилно
// Conditional Statements - Exercise остават да се решат 04. Toy Shop,05. Godzilla vs. Kong,
//06. World Swimming Record,07. Shopping,08. Lunch Break,

#include <iostream>
using namespace std;

int main()
{
    double PriceExcursion; cin >> PriceExcursion;
    int brPuzzles;  cin>> brPuzzles;
    int brTalkingDolls; cin>> brTalkingDolls;
    int brTeddyBears; cin >> brTeddyBears;
    int brMinions; cin >> brMinions;
    int brTrucks; cin>> brTrucks;

    double PricePuzzles = brPuzzles * 2.60;
    double PriceTalkingDolls = brTalkingDolls * 3.00;
    double PriceTeddyBears = brTeddyBears * 4.10;
    double PriceMinions = brMinions * 8.20;
    double PriceTrucks = brTrucks * 2.00;
    
    int TotalBr = brPuzzles + brTalkingDolls + brTeddyBears + brMinions + brTrucks;
    if (TotalBr>=50)
    {
        double TotalPrice = PricePuzzles + PriceTalkingDolls + PriceTeddyBears + PriceMinions + PriceTrucks;
        double otstupka = TotalPrice - ((TotalPrice * 25) / 100);
        cout << otstupka << endl;
    }
    
    double TotalPrice = PricePuzzles + PriceTalkingDolls + PriceTeddyBears + PriceMinions + PriceTrucks;
    double naem = TotalPrice - ((TotalPrice * 10) / 100);
    
   // double Pechalba = TotalPrice - naem - otstupka;


}

