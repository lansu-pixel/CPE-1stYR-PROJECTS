#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define G 32.17
#define pi 3.1416

float get_theta()
{
	float theta;
	cout << "Enter angle (degrees): ";
	cin >> theta;
	return theta;
}

float get_dist()
{
	float dist;
	cout << "Enter distance (feet): ";
	cin >> dist;
	return dist;
}

float get_velocity()
{
	float velocity;
	cout << "Enter velocity (fps) : ";
	cin >> velocity;
	return velocity;
}

float compute_time(float theta, float dist, float velocity)
{
	float rad, time;
	
	rad = theta * pi / 180;
	time = dist / (velocity * cos(rad));
	
	return time;
}

float compute_height(float theta, float velocity, float time)
{
	float rad, height;
	
	rad = theta * pi / 180;
	height = velocity * sin(rad) * time - (G * time * time) / 2;
	
	return height;
}

void display_result (float theta, float dist, float velocity, float rad, float time, float height)
{
	cout << "\n";
	cout << " Projectile Data\n";
	cout << "\nTheta    : "<<theta<<" degrees";
	cout << "\nDistance : "<<dist<<" feet";
	cout << "\nVelocity : "<<velocity<<" fps";
	cout << "\n";
	cout << "\nRadians  : "  <<rad;
	cout << "\nTime     : "<<time<<" seconds";
	cout << "\nHeight   : "<<height<<" feet";
}

void main()
{
	float theta, dist, velocity;
	float rad, time, height;
	
	clrscr();
	
	theta = get_theta();
	dist = get_dist();
	velocity = get_velocity();
	rad = theta * pi / 180;
	
	time = compute_time(theta, dist, velocity);
	height = compute_height(theta, velocity, time);
	
	display_result(theta, dist, velocity, rad, time, height);
	
	getch();
}
	

	


