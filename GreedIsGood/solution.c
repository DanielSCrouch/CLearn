
int score(const int dice[5]) {
  
    int score = 0; 
  
    // count scores
    int count[] = {0,0,0,0,0,0,0};
    for (int i = 0; i < 5; i++) ++count[dice[i]];
  
    // sum scores values (2-6)        
    for (int j = 2; j < 7; j++) if (count[j] >= 3) score += j * 100; 
    
    // add score value 3 x (1)
    if (count[1] >= 3) score += 1000;
    
    // add score single (1) and (5)  
    score += (count[1] % 3) * 100;
    score += (count[5] % 3) * 50;
    
    
    return score; 
  
    

}