#include "ofMain.h"

class ofxSpaceColonizationBranch{

public:
    ofxSpaceColonizationBranch(glm::vec3 _direction);
    
    int getIndexParent() const;
    int getCount() const;
    glm::vec3 getPosition() const;
    glm::vec3 getDirection() const;

    void reset();
    void addToDirection(glm::vec3 _newDir);
    void incrementCounterBy(int _val);
    void setPosition(glm::vec3 pos);
    void move(glm::vec3 _pos, glm::vec3 _parentPos);
    void setParentByIndex(int parent_index) { this->indexParent = parent_index; };

private:
    int count = 0;
    glm::vec3 direction;
    glm::vec3 originalDirection;
    glm::vec3 position;
    int indexParent = 0;
};

