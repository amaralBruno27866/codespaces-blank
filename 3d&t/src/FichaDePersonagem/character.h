#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;
namespace tokioDefenders {
    class Character {
        private:
        // Header with character basic info
        string name;
        int kit;
        int race;
        // Phiscal attributes
        int strength;
        int expertise;
        int defense;
        int vigor;
        int firepower;
        int lifePoints;
        int magicPoints;
        // Mafical attributes
        int water;
        int air;
        int fire;
        int light;
        int earth;
        int dark;
        // History
        string history;
    }
}

#endif // CHARACTER_H