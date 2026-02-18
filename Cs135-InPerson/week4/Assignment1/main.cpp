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
 

    //total plushies toys puchased 
    int TOTAL_TOYS_PLUSHIES = PACK_SIZE * PlushPackQuantity; // total toys purchased 
    double COST_PER_TOY_PLUSHIES = plushPackCost / PACK_SIZE; //cost per toy 
    double TOTAL_COST_PLUSHIES = plushPackCost * PlushPackQuantity; // total cost 
    double SALE_PRICE_PER_TOY_PLUSHIES = COST_PER_TOY_PLUSHIES + (COST_PER_TOY_PLUSHIES * MARKUP); // sale per toy
    double TOTAL_SALE_PRICE_PLUSHIES = SALE_PRICE_PER_TOY_PLUSHIES * TOTAL_TOYS_PLUSHIES; // total sale price (revenue ) 
    double PROFIT_PER_TOY_PLUSHIES = SALE_PRICE_PER_TOY_PLUSHIES - COST_PER_TOY_PLUSHIES; // profit per toy 
    double TOTAL_PROFIT_PLUSHIES = PROFIT_PER_TOY_PLUSHIES * TOTAL_TOYS_PLUSHIES; // total profit 

    cout << "\n[Plushies]" << endl; 
    cout << "Total toys purchased: " << TOTAL_TOYS_PLUSHIES << endl;
    cout << fixed << setprecision(2);
    cout << "Single Toy Cost: $" << COST_PER_TOY_PLUSHIES << endl;
    cout << "Total cost: $" << TOTAL_COST_PLUSHIES << endl;
    cout << "Single Toy Sale price: $" << SALE_PRICE_PER_TOY_PLUSHIES << endl;
    cout << "Total Sale Price: $" << TOTAL_SALE_PRICE_PLUSHIES << endl;
    cout << "Profit per toy: $" << PROFIT_PER_TOY_PLUSHIES << endl;
    cout << "Total profit: $" << TOTAL_PROFIT_PLUSHIES << endl;

    int TOTAL_TOYS_ACTION_FIGURES = PACK_SIZE * ActionFigurePackQuantity;
    double COST_PER_TOY_ACTION_FIGURES = actionFigurePackCost / PACK_SIZE;
    double TOTAL_COST_ACTION_FIGURES = actionFigurePackCost * ActionFigurePackQuantity; 
    double SALE_PRICE_PER_TOY_ACTION_FIGURES = COST_PER_TOY_ACTION_FIGURES  + (COST_PER_TOY_ACTION_FIGURES * MARKUP ); 
    double TOTAL_SALE_PRICE_ACTION_FIGURES = SALE_PRICE_PER_TOY_ACTION_FIGURES * TOTAL_TOYS_ACTION_FIGURES ;
    double PROFIT_PER_TOY_ACTION_FIGURES = SALE_PRICE_PER_TOY_ACTION_FIGURES - COST_PER_TOY_ACTION_FIGURES; 
    double TOTAL_PROFIT_ACTION_FIGURES = PROFIT_PER_TOY_ACTION_FIGURES * TOTAL_TOYS_ACTION_FIGURES; 

    cout << "\n[Action Figures]" << endl; 
    cout << "Total toys purchased: " << TOTAL_TOYS_ACTION_FIGURES << endl;
    cout << fixed << setprecision(2);
    cout << "Single Toy Cost: $" << COST_PER_TOY_ACTION_FIGURES << endl;
    cout << "Total cost: $" << TOTAL_COST_ACTION_FIGURES << endl;
    cout << "Single Toy Sale price: (Revenue) $" << SALE_PRICE_PER_TOY_ACTION_FIGURES << endl;
    cout << "Total Sale Price: $" << TOTAL_SALE_PRICE_ACTION_FIGURES << endl;
    cout << "Profit per toy: $" << PROFIT_PER_TOY_ACTION_FIGURES << endl;
    cout << "Total profit: $" << TOTAL_PROFIT_ACTION_FIGURES << endl;


    int TOTAL_TOYS_PUZZLES = PACK_SIZE * puzzlePackQuantity;
    double COST_PER_TOY_PUZZLES = puzzlePackCost / PACK_SIZE;
    double TOTAL_COST_PUZZLES = puzzlePackCost * puzzlePackQuantity; 
    double SALE_PRICE_PER_TOY_PUZZLES = COST_PER_TOY_PUZZLES  + (COST_PER_TOY_PUZZLES * MARKUP ); 
    double TOTAL_SALE_PRICE_PUZZLES = SALE_PRICE_PER_TOY_PUZZLES * TOTAL_TOYS_PUZZLES ;
    double PROFIT_PER_TOY_PUZZLES = SALE_PRICE_PER_TOY_PUZZLES - COST_PER_TOY_PUZZLES; 
    double TOTAL_PROFIT_PUZZLES = PROFIT_PER_TOY_PUZZLES * TOTAL_TOYS_PUZZLES; 



    cout << "\n[Puzzles]" << endl; 
    cout << "Total toys purchased: " << TOTAL_TOYS_PUZZLES << endl;
    cout << fixed << setprecision(2);
    cout << "Single Toy Cost: $" << COST_PER_TOY_PUZZLES << endl;
    cout << "Total cost: $" << TOTAL_COST_PUZZLES << endl;
    cout << "Single Toy Sale price: (Revenue) $" << SALE_PRICE_PER_TOY_PUZZLES << endl;
    cout << "Total Sale Price: $" << TOTAL_SALE_PRICE_PUZZLES << endl;
    cout << "Profit per toy: $" << PROFIT_PER_TOY_PUZZLES << endl;
    cout << "Total profit: $" << TOTAL_PROFIT_PUZZLES << endl;

    double totalCost =  TOTAL_COST_ACTION_FIGURES + TOTAL_COST_PLUSHIES +  TOTAL_COST_PUZZLES; 
    int TotalToysPurchased = TOTAL_TOYS_PUZZLES + TOTAL_TOYS_PLUSHIES + TOTAL_TOYS_ACTION_FIGURES;
    cout <<"\n[Grand Totals]" << endl; 
    cout << "Total Toys Purchased :" <<  TotalToysPurchased  << endl; 
    cout << "Total Cost: $" << totalCost; 
    cout << "Total Sale Price (Revenue): $" << SALE_PRICE_PER_TOY_ACTION_FIGURES + SALE_PRICE_PER_TOY_PLUSHIES + SALE_PRICE_PER_TOY_PUZZLES; 

     return 0; 
    
}
