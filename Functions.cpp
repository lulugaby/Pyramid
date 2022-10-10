#include "Functions.h"

string createPyramid(int num)
{
    if (num < 0){
        return "Negative pyramid size.";
    }
    if (num >= 500){
        return "Pyramid size too large.";
    }
    if (num == 0){
        return "Invalid pyramid size.";
    }
    else{
        string boxes = string(num-1, ' ') + " -\n";
        for (int i = 0; i < num; i++) {
            boxes = boxes +  string(num - i -1 , ' ') ;
            for (int x = 0; x < i +1 ; x++){
                boxes = boxes +  "| ";
            }
            

            boxes = boxes +  "|\n"  + string(num - i -1 , ' ') ;
            
            if (num - i == 1){
                boxes = boxes + " ";
            }
            
            
            for (int x = 0; x < i +1 ; x++){
                boxes = boxes + "--" ;
            }
            
            boxes = boxes +  "-\n";
    }
    return  boxes.substr(0, boxes.size()-3);
    }
}

int getUserInput()
{
    int x;
    cout <<"Pyramid Height: ";
    cin >> x;
    return x;
}
