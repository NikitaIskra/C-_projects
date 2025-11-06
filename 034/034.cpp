#include <iostream>
#include <memory>

using namespace std;

class Enemy {
public:
    Enemy() {
        cout << "Enemy created" << endl;
    }
    void attack() const {
        cout << "Enemy attacks!" << endl;
    }
    friend ostream& operator<<(ostream& out, const Enemy&) {
        out << "I am an Enemy" << endl;
        return out;
    }

    ~Enemy() {
        cout << "Enemy destroyed!" << endl;
    }
};

class Secret {
public:
    Secret() {
        cout << "Secret stored" << endl;
    }
    ~Secret() {
        cout << "Secret stored" << endl;
    }
};

void takeOwn(unique_ptr<Enemy> test_enemy) {
    if (test_enemy) 
        cout << *test_enemy << endl;
    cout << "My_owner function" << endl;    
}

void takeObject(Enemy* test_enemy) {
    if (test_enemy)
        cout << *test_enemy << endl;
    cout << "My_owner function" << endl;
}

int main()
{
    unique_ptr<Enemy> enemy(new Enemy);//-OC MEMORY
    unique_ptr<Enemy> boss = make_unique<Enemy>();
    if (boss)
        cout << *boss << endl;
    enemy->attack();
    takeObject(boss.get());
    unique_ptr<Enemy> newBoss = move(boss);
    if (!boss) cout << "Boss is now empty" << endl;

    unique_ptr<Enemy[]> boss2 = make_unique<Enemy[]>(5);
    cout << boss2[0] << endl;

    cout << "End program" << endl;

    shared_ptr<Enemy> en1 = make_shared<Enemy>();
    shared_ptr<Enemy> en2 = en1;
    shared_ptr<Enemy> en3 = en1;
    cout << "Refrence count: " << en1.use_count() << endl;

    shared_ptr<Secret> sharedSecret = make_shared<Secret>();
    weak_ptr<Secret> observer = sharedSecret;
    shared_ptr<Secret> shared = observer.lock();
    cout << "Refrence count: " << observer.use_count() << endl;
}

