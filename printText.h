#ifndef PRINTTEXT_H_INCLUDED
#define PRINTTEXT_H_INCLUDED

// massage lol
void printText(std::string massage, float position_X=50.0, float position_Y=1800.0, float scale=1.0, int thick=5){

    glPushMatrix();
    glTranslatef(position_X, position_Y, 0.0f);
    glScalef(scale, scale, 0.0f);
    glLineWidth(thick);

    unsigned char buf[massage.length() + 1];
    std::copy(massage.begin(), massage.end(), buf);
    buf[massage.length()] = '\0';

    glutStrokeString(GLUT_STROKE_ROMAN, buf);

    glPopMatrix();
}


#endif // PRINTTEXT_H_INCLUDED
