#include "logic.h"

int main(){
    bool keepPlaying = true;
    while (keepPlaying){
        if(displayMenu() == false){
            keepPlaying = false;
        }    
    }
    return 0;
}