//assignment 2 header file
float avg(float list[], int items){
    float total = 0.0;
    for(int i=0;i<items;i++){
        total+=list[i];
    }
    float average = total/items;
    return average;
}