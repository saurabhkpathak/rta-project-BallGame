#include "cBicho.h"

cBall::cBall(void)
{
	SetVel(0.0,0.0,0.0);
	yaw = 0.0f; pitch = 0.0f;
}
cBall::~cBall(void){}

void cBall::SetPos(float posx, float posy, float posz)
{
	x = posx;
	y = posy;
	z = posz;
}
void cBall::SetX(float posx)
{
	x = posx;
}
void cBall::SetY(float posy)
{
	y = posy;
}
void cBall::SetZ(float posz)
{
	z = posz;
}
float cBall::GetX()
{
    return x;
}
float cBall::GetY()
{
    return y;
}
float cBall::GetZ()
{
    return z;
}

void cBall::SetVel(float velx, float vely, float velz)
{
	vx = velx;
	vy = vely;
	vz = velz;
}
void cBall::SetVX(float velx)
{
	vx = velx;
}
void cBall::SetVY(float vely)
{
	vy = vely;
}
void cBall::SetVZ(float velz)
{
	vz = velz;
}
float cBall::GetVX()
{
    return vx;
}
float cBall::GetVY()
{
    return vy;
}
float cBall::GetVZ()
{
    return vz;
}

void cBall::SetYaw(float ang)
{
	yaw = ang;
}
void cBall::SetPitch(float ang)
{
	pitch = ang;
}
float cBall::GetYaw()
{
	return yaw;
}
float cBall::GetPitch()
{
	return pitch;
}

void cBall::SetState(int s)
{
	state = s;
}
int cBall::GetState()
{
	return state;
}

void cBall::SetMaxHealth(int max_h)
{
	max_health = max_h;
}
int cBall::GetMaxHealth()
{
	return max_health;
}
void cBall::SetHealth(int h)
{
	health = h;
}
int cBall::GetHealth()
{
	return health;
}