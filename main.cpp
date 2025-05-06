#include <iostream>
#include "scenes.h"

using namespace std;

scene Scenes[]={TitleScreen,BackGround,Opening,Hungie,Scavenge,Abalone,Hunt,Urchin,Meal,Chow,StillHungie,Urchin2,GoHungry,Sleep,WakeUp,HideAndSeek,HungryAgain,LastDay,Starvation,Hunt2,Eating,FillUp,FoodComa,Disease,NonFunctional,Kill,Sighting,Shark,Bite,Escape,Chomp,BleedOut,Race,NeutralEnd};
//              0           1           2       3       4       5       6       7   8   9       10          11      12      13  14      15          16             17   18          19  20      21      22      23      24             25   26      27      28  29  30      31      32      33
void PrintScene(scene CurrentScene);

int main(){
    scene CurrentScene=Scenes[0];
    int nextID=0;
    int selection;
    while(nextID!=-1){
        CurrentScene=Scenes[nextID];
        PrintScene(CurrentScene);
        cin>>selection;
        switch(selection){
            case 1:
                nextID=CurrentScene.destination1;
            break;

            case 2:
                if(CurrentScene.option2!=""){
                    nextID=CurrentScene.destination2;
                }
            break;

            case 3:
                if(CurrentScene.option3!=""){
                    nextID=CurrentScene.destination3;
                }
            break;

            case -1:
                nextID=-1;
            default:
                break; 
        }
    }
    system("cls");
    cout<<"Goodbye!"<<endl;
    return 1;
}

void PrintScene(scene CurrentScene){
    system("cls");
    cout<<CurrentScene.content<<endl<<endl;
    cout<<"1. "<<CurrentScene.option1<<endl;
    if(CurrentScene.option2!=""){
        cout<<"2. "<<CurrentScene.option2<<endl;
    }
    if(CurrentScene.option3!=""){
        cout<<"3. "<<CurrentScene.option3<<endl;
    }
}