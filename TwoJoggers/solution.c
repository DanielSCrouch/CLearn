int gcd(int a, int b);

typedef struct Laps_Pairing {
    int bob;
    int charles;
} laps;

laps nbr_of_laps(int x, int y) {
    
    struct Laps_Pairing laps;
    
    // lowest common multiple
    int lcm = (x * y) / gcd(x, y);
    
    // laps 
    laps.bob = lcm / x; 
    laps.charles = lcm / y; 
    
    return laps; 

}

int gcd(int a, int b) {
    // greater common divisor (Euclid) 
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}