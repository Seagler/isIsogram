#include "isogram.h"
#include "string.h"

bool is_isogram(const char phrase[]){

    
    int len = strlen(phrase);
   
    for (int i = 0; i < len; i++) {
        char b = phrase[i];
        int hits = 0;

        for (int j = 0; j < len; j++) {
            if ((b == phrase[j] || b == phrase[j] - 32) && (b != ' ')){
                hits++;
            }
        }

        if (hits > 1){
            return false;
        }
    }
    return true;
}
