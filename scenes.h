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

scene Opening{"You are a wonderful little young adult otter off the coast of San Francisco. It's a gorgeous day to swim around and be a wonderful little young adult otter off the coast of San Francisco.","Continue",3,"Continue",3,"Continue",3};

scene Hungie{"However, on this beautiful day, it comes to your attention that you have not eaten. Usually, it would be easy to find a meal, but this far north kelp cover is severely limited. Things have gotten worse in recent years, and you've already picked much of the area clean. You could see what you can scrounge up among the kelp, or venture into more barren waters in hopes of finding something.","Scavenge Among the Kelp",4,"Go Out on the Hunt",6};

scene Scavenge{"In recent years, kelp forests have begun to vanish in Northern California. Bull Kelp forests have had to deal with increasing temperatures, coupled with a lack of sea otters like you, and dropping sea star populations, allowing urchins to explode out of control, and eat away at the forests.","Continue",5,"Continue",5,"Continue",5};

scene Abalone{"Sea Star Wasting Syndrome has destroyed star populations, making some previously abundant and important species Locally Extinct. In warmer waters, food and other resources have been heavily limited. In short, things are poor. Fortunately, you are able to find a single Red Abalone. In recent years your fellow otters have been dying off due to neurological diseases carried by prey, but if it's safe, an abalone is a tasty meal.","Chow down.",1,"Disease? No way, I'll hunt something else.",6};

scene Hunt{"The kelp forest quickly gives way to a sea urchin barren. That's the unfortunate product of recent habitat decay. The urchins have been devouring everything, and now what used to be more kelp forest is a seemingly endless desert covered in their black and purple spines.","Continue",7,"Continue",7,"Continue",7};

scene Urchin{"The good news is that each of those patches of spines represents a potential meal for you. They aren't the tastiest, but a rock will pop them right open and the innards are perfectly edible. Another downside is that the longer you stay out of the forest, the less protected from potential predators you are.","Crack an Urchin",1,"Return to Safety",1};

scene Meal{"The abalone is too good of a meal to pass up. Finding a nearby heavy rock, you smash it against the shell untill the little creature loses its hold on the seafloor. A few more hits, and the animal's shell gives way, and you're confident it's dead.","Continue",9,"Continue",9,"Continue",9};

scene Chow{"You drag your kill to the surface. Floating on your back, you slurp up the giant snail over the course of several minutes. Positively delicious, if you do say so yourself."};