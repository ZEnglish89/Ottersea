#include<string.h>
using namespace std;

struct scene{
    
    string content;

    string option1="";
    int destination1;
    string option2="";
    int destination2;
    string option3="";
    int destination3;
};

scene TitleScreen{"OTTERSEA, a Simple Otter Odyssey\n\nQuit at any time by entering '-1'","Play",2,"About",1,"Quit",-1};

scene BackGround{"California Sea Otters have been historically hunted for their skins and fur.\nThe eighteenth and nineteenth centuries were the peak of the global otter\ntrade. Between the years 1786-1847, more than fifty thousand otters were killed\nfor their skins, and that is only counting those which were hunted legally\nand taken on record. At their lowest level, there were fewer than fifty\nindividuals still existing in the wild. They were granted protection in 1911, but as recently\nas 2017 their numbers had still only recovered to a few thousand.\nTheir recovery has been significantly slower than pinnipeds such as the\nCalifornia Sea Lion, an otherwise very comparible species. Those other animals\nhave made drastic recoveries and returned to their full historic range,\nwhile otters languish in low populations and cover less than half their previous habitat.\nIn Ottersea, you play as one of these recovering sea otters, trying to stabilize in the off-balance\nhabitat prolonged hunting created.\n\nThe goal is to demonstrate the ways in which otters' habitats have changed in their absence,\n to be less hospitable than when they left.\n\nAlso kindly ignore the formatting, I had to do all the line breaks manually:3","Return",0};

scene Opening{"You are a wonderful little young adult otter off the coast of San Francisco.\nIt's a gorgeous day to swim around and be a wonderful little young adult otter\noff the coast of San Francisco.","Continue",3};

scene Hungie{"However, on this beautiful day, it comes to your attention that you have not\neaten. Usually, it would be easy to find a meal, but this far north kelp cover is\nseverely limited. Things have gotten worse in recent years, and you've\nalready picked much of the area clean. You could see what you can scrounge\nup among the kelp, or venture into more barren waters in hopes of finding something.","Scavenge Among the Kelp",4,"Go Out on the Hunt",6};

scene Scavenge{"In recent years, kelp forests have begun to vanish in Northern California.\nBull Kelp forests have had to deal with increasing temperatures, coupled with a lack\nof sea otters like you, and dropping sea star populations, allowing urchins\nto explode out of control, and eat away at the forests.","Continue",5};

scene Abalone{"Sea Star Wasting Syndrome has destroyed star populations, making some previously\nabundant and important species Locally Extinct. In warmer waters, food and other resources\nhave been heavily limited. In short, things are poor. Fortunately, you are\nable to find a single Red Abalone. In recent years your fellow\notters have been dying off due to neurological diseases carried by\nprey, but if it's safe, an abalone is a tasty meal.","Chow down.",8,"Disease? No way, I'll Hunt Something Else.",6};

scene Hunt{"The kelp forest quickly gives way to a sea urchin barren. That's the unfortunate\nproduct of recent habitat decay. The urchins have been devouring everything, and now what\nused to be more kelp forest is a seemingly endless desert covered in their\nblack and purple spines.","Continue",7};

scene Urchin{"The good news is that each of those patches of spines represents a potential\nmeal for you. They aren't the tastiest, but a rock will pop them right open and the\ninnards are perfectly edible. Another downside is that the longer you stay out of\nthe forest, the less protected from potential predators you are.","Crack an Urchin",25,"Return to Safety",4};

scene Meal{"The abalone is too good of a meal to pass up. Finding a nearby heavy rock,\nyou smash it against the shell until the little creature loses its hold on the\nseafloor. A few more hits, and the animal's shell gives way, and you're\nconfident it's dead.","Continue",9};

scene Chow{"You drag your kill to the surface. Floating on your back, you slurp up the\ngiant snail over the course of several minutes. Positively delicious, if you do say\nso yourself, and if it's made you sick the effects aren't instant.","Continue",10};

scene StillHungie{"Unfortunately, that wasn't enough food. An otter of your age has to\neat up to a third of their body weight, and as hefty as that abalone was, it's not gonna\ncut it for today. Plus, you've now exhausted what you could find in the forest.","Attempt to Hunt",11,"Go Hungry",12};

scene Urchin2{"Outside of the kelp forest, the seafloor has been dominated by purple sea\nurchins. The little spikeballs don't have many predators after the decline of sea stars,\nand with your fellow otters limited in number, and they just\neat and eat and eat. The upside is that you can eat them in\nturn. The downside is that they aren't too tasty, and outside the forest\nthings are much more dangerous for you.","Continue",19};

scene GoHungry{"It would take a few days for you to starve, but that doesn't make today's\nlackluster catch sting any less, nor does it make your stomach feel any less empty.\nAt least the kelp forest around you is pretty.","Get some Sleep",13};

scene Sleeping{"You wrap yourself up in a particularly long strand of kelp anchored to the\nseafloor to keep yourself from drifting, and float at the surface on your back,\nsettling with the movement of the currents. Off to sleepy time you go.","Wake up",14};

scene WakeUp{"You rest well, and wake the next morning still wrapped in the kelp. It's\nanother beautiful day. Unfortunately, the same problems still face you.","See what's Left in the Forest",15,"Go for a Hunt",11};

scene HideAndSeek{"You take a quick swim through the forest. You whip around and\nbetween the pillars of kelp, ever-impressed with your swimming. Unfortunately, it seems like\nthe food really has dried up in your cosy home. There are scraps here and there,\nbut everything appetizing has already been snatched up. Your stomach rumbles,\nand you feel your swimming slow as the need to conserve energy becomes obvious.","Go for a Hunt.",11,"Go Hungry Again",16};

scene HungryAgain{"Now you are beginning to be tested. As you wrap yourself back into\nyour kelp anchor, your paws aren't as steady as usual, and the pit in your stomach has opened wider.\nThe pangs of hunger make it difficult to get to sleep, but you\nmanage it eventually.","Wake up",17};

scene LastDay{"Now things are dire. When you awake, you feel the hunger in all your\nmuscles, and every movement you make seems to come with a healthy amount of the shakes.\nIt dawns on you that even if you don't like leaving the forest, your\noptions have been exhausted.","Go for a Hunt",11,"Succumb",18};

scene Starvation{"No food, no luck. It's been more than two days since you've last eaten,\nand three since you ate properly. With your little otter heart running all the\ntime, and the energy being sucked up by all your swimming, you needed that\nfood desperately. Now, as you float on your back, eyes fluttering closed,\nyou realize that your last chance left you behind.\n\nYou close your little otter eyes, and they will not open again.\nEND","Main Menu",0};

scene Hunt2{"Grabbing a rock, you move to pop open an urchin. Their spines can sting,\nbut a stone feels no pain. On the first strike, it's hard as a rock, but on the second\nit ruptures and the soft-crumbly innards fly out. You scoop up what you can\nand bring it to the surface.","Eat Up!",20};

scene Eating{"The urchin is dry, ironically for an aquatic creature. But it's decently\nfilling, and you've only eaten one of the hundreds or even thousands dotting the seafloor\nbelow you. This is definitely a chance for a good meal.","Fill up on Urchins",21};

scene FillUp{"They are far from delicious, but after the dearth of food you've had\nrecently, you cannot possibly complain. And besides, you're just doing your part: left\nunchecked, those urchins are on a trajectory to completely raze California's beautiful\nkelp forests in the coming years. Every one you eat is one less eating your home.","Take the Rest of the Day Off",22};

scene FoodComa{"A job well-done, you spend the remainder of the day kicking around\nthrough the kelp forest. Things really are beautiful, even though conditions have been worsening.\nYou share the habitat with a wide variety of fish, crustaceans, and even some smaller species\nof shark. They're all struggling just like you, but with a full belly, you can't\ncare too much. When the day finally comes to an end, you wrap yourself right back\nup into the kelp, and fall sound asleep.","Wake Up.",23};

scene Disease{"However, when you awake in the morning, you can instantly tell that\nsomething is very wrong. When unwrapping yourself from the kelp, your paws are quivering, despite\nyour new well-fed status. As you kick off to swim through the forest, it becomes apparent that\nit's not just your paws. Your hind legs won't obey you, lashing out at the water\ninstead of skillfully propelling you forward.","Will Yourself to Keep Swimming",24};

scene NonFunctional{"It's no good. You've been overtaken, and quickly. Your limbs\nwill only obey the most general of instructions, and as you keep fighting to move in a coherent direction,\na fog behind your eyes grows. Something you ate has gone to your head, and your motor function\nis quickly leaving you. It may have been the abalone, or just as easily any one of\nthe urchins you had no choice but to scarf down.\n\nAmong sea otters who wash ashore, assorted Neurological diseases are the leading cause of death, typically contracted\nfrom prey, who commonly become hosts due to runoff of contaminated river water. Without your body obeying your\nmind, you cannot hunt, cannot swim, cannot live. As sad as it is, you can only struggle\nagainst the disease until your body gives out.\nEND","Main Menu",0};

scene Kill{"Grabbing a rock, you move to pop open an urchin. Their spines can\nsting, but a stone feels no pain. On the first strike, it's hard as a rock, but on the second\nit ruptures and the soft-crumbly innards fly out. You scoop up what you can\nand bring it to the surface.","Start Eating",26};

scene Sighting{"As you bite into your well-earned meal, you notice a shadow\nin the water beneath you. Ducking your head under, your heart stops for a moment. Here off the coast\nof Northern California, it's an honest-to-god Great White Shark.","Continue",27};

scene Shark{"Sea Otters aren't part of their usual prey, but seals certainly are,\nand they aren't very good at telling the difference. You're pretty sure it hasn't noticed\nyou yet, but it looms beneath you a couple dozen feet down. You aren't the only\none in this ocean who needs to eat.","Try to Finish your Meal",28,"Dump the Urchin and Bail",29};

scene Bite{"Rapidly you try to chow down on your urchin, hoping to get enough\ncalories to sustain yourself before you need to retreat away from your food source. But what did\nyou really expect to happen? The shark spots you, and the shadow overtakes you from\nbelow before you can react.","Continue",30};

scene Escape{"You drop your meal, and quickly flip onto your stomach and dive for\nthe safety of the forest. Within moments you feel the shark lurch into motion behind you, but\nyou cannot afford to turn around.","SWIM!!!",32};

scene Chomp{"As you flip around to attempt a dive, the jaws close around your\nmidsection. Your fur is thick, and your flesh isn't weak, but the shark teeth cleave straight\nthrough you regardless. Almost immediately, the great predator realizes it's mistaken you for\nsomeone else, and doesn't come in for a second bite, but the damage is already done.","Continue",31};

scene BleedOut{"Despite not actually being their prey, shark bites like this one\nare the second leading cause of premature death for sea otters in recent years. It doesn't matter\nthat the great white let you live, the gaping wounds in your torso won't heal. If\nyou don't bleed out within the hour, infection will take you within the week.\nEND","Main Menu",0};

scene Race{"You feel the disturbance in the water that is the shark gaining on you,\nbut before the jaws can snatch you up, you shoot between two pillars of kelp and into your\nforest home. The shark could potentially follow you in, but it's too large to keep up while\nfighting the heavy plant cover, and both of you know it.","Calm Yourself, and Move On",33};

scene NeutralEnd{"You've lost your meal. The pieces of sea urchin float uselessly through\nthe sea a hundred yards away, and with the shark still in the area, you don't feel safe\ntrying to grab another anytime soon. That said, you made it home with your life, and you have\nconfirmed that the barrens outside the forest are a worthwhile food source.\nThings aren't looking great, but the coming days may move you in a better direction.\nEND","Main Menu",0};