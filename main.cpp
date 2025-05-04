#include <iostream>
#include "scenes.h"

using namespace std;

scene Scenes[]={TitleScreen,BackGround,Opening,Hungie,Scavenge,Abalone,Hunt,Urchin,Meal};
//              0           1           2       3       4       5       6       7   8   9
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
                nextID=CurrentScene.destination2;
            break;

            case 3:
                nextID=CurrentScene.destination3;
            break;

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
    cout<<CurrentScene.content<<endl;
    cout<<"1. "<<CurrentScene.option1<<endl;
    cout<<"2. "<<CurrentScene.option2<<endl;
    cout<<"3. "<<CurrentScene.option3<<endl;
}