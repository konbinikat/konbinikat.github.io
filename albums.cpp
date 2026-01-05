#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>
using namespace std;

struct album {
    string name;
    int score = 0;
};

bool method (const album &a, const album &b) {
    return a.score > b.score;
}

bool methodInv (const album &a, const album &b) {
    return a.score < b.score;
}

int main() {

    string albList[] = {
        "Black Chapel Sun",
        "Arc Limit",
        "Pain to Power",
        "Witness", 
        "F♯ A♯ ∞",
        "Magic, Alive!",
        "Vanisher",
        "Racing Mount Pleasant",
        "45 Pounds",
        "Route One",
        "Ágætis byrjun",
        "White Pony",
        "Floating Points",
        "Siblings 2",
        "Beautiful Rewind",
        "Twin Fantasy",
        "Mysterium",
        "Wish You Were Here",
        "Mid Air",
        "Knocknarea",
        "Connla's Well",
        "WHEN WE ALL FALL ASLEEP, WHERE DO WE GO?",
        "NO TITLE AS OF 13 FEBRUARY 2024 28,340 DEAD",
        "Stereo Grief",
        "HEAV3N SUSPENDED",
        "songs",
        "The Fool",
        "Ants From Up There",
        "Tanto Tempo",
        "For the first time",
        "The Sunset Violent",
        "Tír Na NÓg",
        "Carrie & Lowell",
        "You Can't Kill Me",
        "Melt My Eyez See Your Future",
        "Process",
        "Good Kid m.A.A.d City",
        "Lahai",
        "Wolfgang Amadeus Phoenix",
        "Kikuo Miku 6",
        "Flower of the soul",
        "Regret When It Was Lost",
        "Mother Melancholia",
        "CHROMAKOPIA",
        "Soundtracks for the Blind",
        "IGOR",
        "Flower Boy",
        "Construcao",
        "Terra",
        "This World is Going to Ruin You",
        "Veneer",
        "GNX",
        "The Colour in Anything",
        "OIL OF EVERY PEARL'S UN-INSIDES",
        "Bewitched",
        "Ichiko blue",
        "Ichiko pink",
        "Windswept Adan",
        "Myopia",
        "hypochondriac",
        "punk2",
        "The Things They Believe",
        "it's hard to see color",
        "Random Memories",
        "Nascent",
        "Where Were U in '92?",
        "Silencia",
        "Hummingbird",
        "ERROR",
        "how i'm feeling now",
        "I Let it in and It Took Everything",
        "Music From Before The Storm",
        "Bad Cameo",
        "Ghosting",
        "Spiderwebbed",
        "MK3.5",
        "Nurture",
        "The Birds Outside Sang",
        "If Blue Could Be Happiness",
        "Florist",
        "There Must be Something Here",
        "Hi This is Flume",
        "Actual Life 3",
        "Actual Life 2",
        "Actual Life 1",
        "IDMHY",
        "Flood Dream",
        "To Pimp A Butterfly",
        "Eyeline",
        "Secret Life",
        "SCRAPYARD",
        "What Do You Want!",
        "ÁTTA",
        "You Won't Get What You Want",
        "Untrue"        
    };

    vector<album> arr;

    for (auto i:albList) {
        album temp;
        temp.name = i;
        arr.push_back(temp);
    } 

    for(int i = 0; i < arr.size() -1; i++) {

        bool breaked = false;

        for (int j = 0; j < arr.size() -1; j++) {    
            if (arr[i].name != arr[j].name){

                for(int i = 0; i < 10; i++) {cout << endl;}

                cout << "1. " << arr[i].name << "\n2. " << arr[j].name << "\nR: ";
                char q;
                cin >> q;
                if (q == '1') {
                    arr[i].score += 1;
                } else if (q == 'q') {
                    breaked = true;
                    break;
                } else if (q == '2') { arr[j].score += 1; }
                
            }
        }

        sort(arr.begin(), arr.end(), method);
        if (breaked == true) break;
    }

    sort(arr.begin(), arr.end(), method);
    for(int i = 0; i < 10; i++) {cout << endl;}

    int count = 0;
    for(auto i:arr) {
        count++;
        cout << fixed << setw(3) << setfill('0') << count << ". " << i.score << ": " << i.name << endl;
    }

}