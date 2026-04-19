#include <iostream>
using namespace std;

enum class Door {
    SAFE_EXIT,
    TRAP,
    START
};

Door chooseDoor(bool hasAccess, bool isSafe, bool isLocked) {
    if (hasAccess && isSafe && !isLocked) {
        return Door::SAFE_EXIT;
    }
    if (!isSafe && isLocked) {
        return Door::TRAP;
    }
    return Door::START;
}

string getDoorResult(Door door) {
    switch (door) {
        case Door::SAFE_EXIT: return "Safe Exit";
        case Door::TRAP: return "Trap";
        case Door::START: return "Return to Start";
        default: return "Invalid";
    }
}

int main() {
    bool hasAccess, isSafe, isLocked;

    cout << "Enter hasAccess (0 or 1): ";
    cin >> hasAccess;

    cout << "Enter isSafe (0 or 1): ";
    cin >> isSafe;

    cout << "Enter isLocked (0 or 1): ";
    cin >> isLocked;

    Door result = chooseDoor(hasAccess, isSafe, isLocked);

    cout << "\nDecision: " << getDoorResult(result) << endl;

    return 0;
}
