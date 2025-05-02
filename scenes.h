#include<string.h>
using namespace std;

struct scene{
    
    string content;

    string option1;
    int destination1;
    string option2;
    int destination2;
    string option3;
    int destination3;
};

scene TitleScreen{"OTTERSEA, a Simple Otter Odyssey","Play",2,"About",1,"Quit",-1};
scene BackGround{"California Sea Otters have been historically hunted for their skins and fur. The eighteenth and nineteenth centuries were the peak of the global otter trade. Between the years 1786-1847, more than fifty thousand otters were killed for their skins, and that is only counting those which were hunted legally and taken on record. At their lowest level, there were fewer than fifty individuals still existing in the wild. They were granted protection in 1911, but as recently as 2017 their numbers had still only recovered to a few thousand. Their recovery has been significantly slower than pinnipeds such as the California Sea Lion, an otherwise very comparible species. Those other animals have made drastic recoveries and returned to their full historic range, while otters languish in low populations and cover less than half their previous habitat. In Ottersea, you play as one of these recovering sea otters, trying to stabilize in the off-balance habitat prolonged hunting created.","Return",0,"",1,"",1};
scene Opening{"You are a wonderful little otter off the coast of Monterey."}