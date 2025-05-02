#include <iostream>
#include "scenes.h"

using namespace std;

scene Scenes[]={TitleScreen,BackGround};

int main(){
    scene CurrentScene=TitleScreen;
    int nextID=0;
    int selection;
    while(nextID!=-1){
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
    return 1;
}