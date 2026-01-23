#include <iostream>
using namespace std;

class Player {
    static int totalPlayers;

public:
    void joinGame() {
        totalPlayers++;
        cout << "Player joined! Total Players: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main() {
    Player p1, p2, p3;

    p1.joinGame();
    p2.joinGame();
    p3.joinGame();

    return 0;
}
