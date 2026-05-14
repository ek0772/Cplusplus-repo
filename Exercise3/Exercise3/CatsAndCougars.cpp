#include "CatsAndCougars.h"

/*
:)TODO: the constructor should call the reset function.
The reset function will set both the cats and cougars
class member variables to 0.
*/
CatsAndCougars::CatsAndCougars()
{
    reset();
}

/*
:)TODO: the getCats getter/accessor function only returns
the value of the cats class member variable.
*/
int CatsAndCougars::getCats()
{
    return cats;
}

/*
TODO: the getCougars getter/accessor function only returns
the value of the cougars class member variable.
*/
int CatsAndCougars::getCougars()
{
    return cougars;
}

//made custom classes for total cats and cougars to keep track of cats and cougars across multiple rounds.
int CatsAndCougars::getTotalCats()
{
    return totalCats;
}

int CatsAndCougars::getTotalCougars()
{
    return totalCougars;
}

/*
TODO: the count function will implement the logic to count
cats and cougars. Ensure the reset function is called first.
By callin the reset function, the count function ensures
the cats and cougars class member variables are reset to 0.
*/
void CatsAndCougars::count(string lword, string rword)
{
        //in catsAndCougars->count(hiddenWord, playerGuess),
        //string lword = hiddenWord, and string rword = playerGuess
        
        //To anybody reading this,(Specifically you, professor) I don't mean to defy the TODO, 
        //But resetting every time the count function is called 
        //makes it impossible to count cats and cougars across multiple rounds. 
        //I created custom classes to keep track of totals.

        //count should iterate through each letter, and if it is 
        //in the exact right spot, cats increments, if not, it then iterates
        //through again to find cougars and increment.
        //Check cats first. Short circuits if cat is found,since iterating 
        //through every letter again is unnecessary if the letter is a cat. 
    reset();
    for (int i = 0; i < 4; i++)
    {
        
         
        
        if (lword[i] == rword[i])
        {
            cats += 1;
        }
        else 
            for (int j = 0; j < 4; j++)
                if (lword[i] == rword[j])
                    cougars +=1;
    }     
    //Update overall totals.
    totalCougars += cougars;
    totalCats += cats;

}
/*
TODO: The reset function should only set the cats and cougars
class member variables to 0.
*/
void CatsAndCougars::reset()
{
    cats = 0;
    cougars = 0;
}