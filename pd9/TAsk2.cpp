 #include <iostream>
using namespace std;
float calculateDiscount(string movie_name);
int main() {
    string movie_name;
    cout << "Enter the movie name: ";
    cin >> movie_name;
    float discountedPrice = calculateDiscount(movie_name);
    cout << "Price after discount is: " << discountedPrice << " rupees" << endl;
    return 0;
}

float calculateDiscount(string movie_name) {
    float ticketPrice = 500;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

    for (int i = 0; i < 5; i++) 
    {
        if (movies[i] == movie_name) {
            if (i % 2 == 1)  // Odd index
                return ticketPrice * 0.95; 
            else  
                return ticketPrice * 0.90;  
        }
    }
    cout << "Movie not found in list." << endl;
    return ticketPrice;
}

