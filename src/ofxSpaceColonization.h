#pragma once

#include "ofMain.h"
#include "ofxSpaceColonizationBranch.h"
#include "ofxSpaceColonizationLeaf.h"
#include "ofxSpaceColonizationHelper.h"

class ofxSpaceColonization {
public:
	ofxSpaceColonization();
    void build();
    void grow();
    vector<ofxSpaceColonizationLeaf> getLeaves() const;
    int getSizeBranches() const;
    glm::vec3 getBranchPosition(int _index) const;
    glm::vec3 getParentBranchPosition(int _index) const;

    void setMinDist(int min_dist);
    void setMaxDist(int max_dist);
    void setBranchLength(int branch_length);
    void setTrunkLength(int trunk_length);
    void setRootDirection(glm::vec3 root_direction);
    void setRootPosition(glm::vec3 root_position);
    void setLeavesPositions(vector<glm::vec3> leaves_positions);
    void set3d(bool use3d);

private:
    void addBranchToMesh(shared_ptr<ofxSpaceColonizationBranch> branch);
    vector<ofxSpaceColonizationLeaf> leaves;
    vector<shared_ptr<ofxSpaceColonizationBranch>> branches;
    int max_dist = 150;
    int min_dist = 10;
    int trunk_length = 300;
    glm::vec3 root_position = glm::vec3(0.0f,0.0f,0.0f);
    glm::vec3 root_direction = glm::vec3(0.0f, 1.0f, 0.0f);
    vector<glm::vec3> leaves_positions;
    bool use3d = false;
    int branch_length = 5;
    bool done_growing = false;
};
