#include <iostream> 
#include <iomanip> 

using namespace std; 

int main() { 

/* 
instrtuctions 
You work at a store called Sunny Toy Shop.
The shop buys toys from a distributor in bulk
packs, and then sells each toy at a fixed
markup to earn profit.
The shop sells three types of toys:
1. Plushies
2. Action Figures
3. Puzzles



Each month:
• the shop orders a certain number of
packs of each toy
• each pack has a fixed number of toys
• the pack cost varies by toy type
Your program will calculate:
• how many toys were purchased
• how much the shop spent
• how much money the shop earned
• how much profit the shop made
*/


// constants that are presented 


    const int PACK_SIZE = 24;

// PACK_SIZE → number of toys per pack

// MARKUP → 60% markup on cost price
    const double MARKUP = 0.60;



    // inputs from the clients 
/* 
    For each toy type:
1. Number of packs ordered (integer)
2. Cost per pack (double)
That means 6 total inputs:
• Plushies: pack quantity, pack cost
• Action Figures: pack quantity, pack cost
• Puzzles: pack quantity, pack cost

*/
// plush input
    int PlushPackQuantity;
    double plushPackCost;


    cout << "Plus pack quantity: " ;
    cin >> PlushPackQuantity;
    cout <<"Plush pack cost: ";
    cin >> plushPackCost;


    int ActionFigurePackQuantity;
    double actionFigurePackCost;
// action figure pack 
    cout << "Action figure pack quantity: " ;
    cin >> ActionFigurePackQuantity;
    cout << "Action figure pack cost: ";
    cin >> actionFigurePackCost;
// puzzle pack
    int puzzlePackQuantity;
    double puzzlePackCost;
    cout << "Puzzle pack quantity: " ;
    cin >> puzzlePackQuantity; 
    cout << "Puzzle pack cost: ";
    cin >> puzzlePackCost;
//puzzle pack 
    // int packQuantity; 
    // double packCost; 
    // cout << "Puzzle pack quantity: " ;
    // cin >> packQuantity;
    // cout << "Puzzle pack cost: ";
    // cin >> packCost;  

    //total plushies toys puchased 
    int TOTAL_TOYS_PLUSHIES = PACK_SIZE * PlushPackQuantity; // total toys purchased 
    double COST_PER_TOY_PLUSHIES = plushPackCost / PACK_SIZE; //cost per toy 
    double TOTAL_COST_PLUSHIES = plushPackCost * PlushPackQuantity; // total cost 
    double SALE_PRICE_PER_TOY_PLUSHIES = COST_PER_TOY_PLUSHIES + (COST_PER_TOY_PLUSHIES * MARKUP); // sale per toy
    double TOTAL_SALE_PRICE_PLUSHIES = SALE_PRICE_PER_TOY_PLUSHIES * TOTAL_TOYS_PLUSHIES; // total sale price (revenue ) 
    double PROFIT_PER_TOY_PLUSHIES = SALE_PRICE_PER_TOY_PLUSHIES - COST_PER_TOY_PLUSHIES; // profit per toy 
    double TOTAL_PROFIT = PROFIT_PER_TOY_PLUSHIES * TOTAL_TOYS_PLUSHIES; // total profit 

    cout << "[Plushies]\\n" << endl; 
    cout << "Total toys purchased: " << TOTAL_TOYS_PLUSHIES << endl;
    cout << fixed << setprecision(2);
    cout << "Single Toy Cost: " << COST_PER_TOY_PLUSHIES << endl;
    cout << "Total cost: $" << TOTAL_COST_PLUSHIES << endl;
    cout << "Single Toy Sale price: $" << SALE_PRICE_PER_TOY_PLUSHIES << endl;
    cout << "Total Sale Price: $" << TOTAL_SALE_PRICE_PLUSHIES << endl;
    cout << "Profit per toy: $" << PROFIT_PER_TOY_PLUSHIES << endl;
    cout << "Total profit: $" << TOTAL_PROFIT << endl;
    return 0; 
    
}
