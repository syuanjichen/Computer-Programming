//PREPEND BEGIN
#include <iostream>
using namespace std;

int N = 0;

struct CARD
{
    char name[100];
    int attack;
    int blood;
};

template <typename X>
void show(X card)
{
    cout<<"name : "<<card.name<<"\n";
    cout<<"blood : "<<card.blood<<"\n";
    cout<<"attack : "<<card.attack<<"\n";
    cout<<"----------------------------\n";
}
//PREPEND END

//TEMPLATE BEGIN
template <typename X>
void fight(X cards[], int card1, int card2)
{
    int i, max, min;

    cards[card1].blood -= cards[card2].attack;
    cards[card2].blood -= cards[card1].attack;

    max = (card2 > card1) ? card2 : card1;
    min = (card1 < card2) ? card1 : card2; 

    if(cards[min].blood <= 0)
    {
        for(i = min ; i < N ; i++)
        {
            *(cards[i].name) = *(cards[i + 1].name);
            cards[i].blood = cards[i + 1].blood;
            cards[i].attack = cards[i + 1].attack;
        }

        N = N - 1;
        max -= 1;
    }

    if(cards[max].blood <= 0)
    {
        for(i = max ; i < N ; i++)
        {
            *(cards[i].name) = *(cards[i + 1].name);
            cards[i].blood = cards[i + 1].blood;
            cards[i].attack = cards[i + 1].attack;
        }

        N = N - 1;
    }

    // 0 1 2 3 4 5
    //   x   x
    // 0 2 4 5
}
//TEMPLATE END

//APPEND BEGIN
int main(void)
{
    CARD cards[1000];
    int card1 = 0, card2 = 0;

    cin >> N;

    for(int i = 0 ; i < N ; ++i)
        cin >> cards[i].name >> cards[i].blood >> cards[i].attack;

    while(cin >> card1 >> card2)
        fight(cards, card1, card2);

    for(int i = 0 ; i < N ; ++i)
        show(cards[i]);

    return 0;
}

//APPEND END