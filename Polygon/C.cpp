#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Group {
    char character;
    int count;
};

vector<Group> groupByCharacter(const string &str) {
    vector<Group> result;
    int length = str.size();
    if (length == 0) return result;

    char currentChar = str[0];
    int currentCount = 1;

    for (int i = 1; i < length; i++) {
        if (str[i] == currentChar) {
            currentCount++;
        } else {
            result.push_back({currentChar, currentCount});
            currentChar = str[i];
            currentCount = 1;
        }
    }

    result.push_back({currentChar, currentCount});
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        string pattern, sound;
        cin >> pattern >> sound;

        if (sound.size() < pattern.size() || sound.size() > 2 * pattern.size()) {
            cout << "NO\n";
            continue;
        }

        vector<Group> patternGroups = groupByCharacter(pattern);
        vector<Group> soundGroups = groupByCharacter(sound);

        if (patternGroups.size() != soundGroups.size()) {
            cout << "NO\n";
            continue;
        }

        bool isValid = true;
        for (int i = 0; i < patternGroups.size(); i++) {
            if (patternGroups[i].character != soundGroups[i].character) {
                isValid = false;
                break;
            }
            if (soundGroups[i].count < patternGroups[i].count || soundGroups[i].count > 2 * patternGroups[i].count) {
                isValid = false;
                break;
            }
        }

        cout << (isValid ? "YES\n" : "NO\n");
    }

    return 0;
}
