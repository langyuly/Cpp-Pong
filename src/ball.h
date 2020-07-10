#ifndef BALL_H
#define BALL_H

class Paddle;

struct Coord2 {
    float x;
    float y;
};

class Ball {

 public:
  // constructor and destructor
  Ball(int grid_width, int grid_height)
      : grid_width(grid_width),
        grid_height(grid_height) {}

  // Getters and Setters
  void setSpeed(float init_speed);
  void setDirection(float dir_x, float dir_y);
  void setPosition(float x, float y);

  float getPositionX() const;
  float getPositionY() const;


  bool Move(Paddle& paddle);

 private:
  float m_speed{1.0f};

  float m_pos_x;
  float m_pos_y;
  float m_dir_x;
  float m_dir_y;

  int grid_width;
  int grid_height;
};

#endif