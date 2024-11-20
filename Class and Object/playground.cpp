#include <iostream>
using namespace std;
class Gun
{
public:
    int damage;
    int ammo;
    int scope;
};
class player
{
    class Helmet
    {
        // sirf class me use kr skte h
        int health;
        int level;

    public:
        void setHealth(int h)
        {
            health = h;
        }
        void setLevel(int l)
        {
            level = l;
        }
        void getHealth()
        {
            cout << health << endl;
        }
        void getLevel()
        {
            cout << level << endl;
        }
    };
    int health;
    int score;
    bool isAlive;
    Gun gun;
    Helmet helmet;

public:
    void setHealth(int health)
    {
        this->health = health;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setIsAlive()
    {
        isAlive = true;
    }
    void setGun(Gun gun)
    {
        this->gun = gun;
    }
    int getHealth()
    {
        return health;
    }
    int getScore()
    {
        return score;
    }
    bool getisAlive()
    {
        return isAlive;
    }
    Gun getGun()
    {
        return gun;
    }
    void setHelmet(int level)
    {

        int health;
        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "Invalid level!!";
        this->helmet.setLevel(level);
        this->helmet.setHealth(health);
    }
    void getHelmet()
    {
        helmet.getLevel();
        helmet.getHealth();
    }
};
int main()
{
    player a;               // compile time     static memory allocation
    player *b = new player; // run time    dynamic memory allocation
    Gun awm;
    awm.damage = 150;
    awm.ammo = 7;
    awm.scope = 8;
    Gun *ak = new Gun;
    ak->ammo = 40;
    ak->damage = 40;
    ak->scope = 2;
    a.setHealth(100);
    b->setHealth(70);
    a.setScore(10);
    b->setScore(9);
    a.setIsAlive();
    b->setIsAlive();
    a.setGun(awm);
    b->setGun(*ak);
    cout << a.getHealth() << endl;
    cout << b->getHealth() << endl;
    cout << a.getScore() << endl;
    cout << b->getScore() << endl;
    Gun gun[2];
    gun[0] = a.getGun();
    gun[1] = b->getGun();
    cout << awm.ammo << endl;
    cout << awm.damage << endl;
    cout << awm.scope << endl;
    cout << ak->ammo << endl;
    cout << ak->damage << endl;
    cout << ak->scope << endl;
    cout << gun[0].ammo << endl;
    cout << gun[0].damage << endl;
    cout << gun[0].scope << endl;
    cout << gun[1].ammo << endl;
    cout << gun[1].damage << endl;
    cout << gun[1].scope << endl;
    cout << endl
         << endl;
    a.setHelmet(2);
    a.getHelmet();
}