#include "ofxSpaceColonizationHelper.h"


const vector<glm::vec3> ofxSpaceColonizationHelper::genRandomLeavesPositions(
        int _width, int _height, int n_particles, int _trunk_length
                ){
    vector<glm::vec3> tmp_particles;
    for (int i = 0; i< n_particles; i++) {
        glm::vec3 pos = glm::vec3(ofRandom(-_width/2,+_width/2),
                              ofRandom(_trunk_length, _height),
                              ofRandom(-_width / 2,+_width / 2));
        tmp_particles.push_back(pos);
    }

    return tmp_particles;
}
