#pragma once
#include "Simulator.h"

#include "global.h"

class Masspoint
{
public:
	Masspoint();
	Masspoint(Vec3 position, Vec3 velocity, bool isFixed, Vec3 force, float mass, float damping);
	~Masspoint();

public:
	Vec3 position;
	Vec3 velocity;
	Vec3 force;
	bool isFixed;
	float mass;
	float damping;

	void clearForce();
	void addGravity(float gravityAccel);
	void integratePositionsLeapfrog(float elapsedTime);
	void integratePositionsEuler(float elapsedTime);
	void integrateMidpoint(float elapsedTime);
	void integrateVelocityLeapfrog(float elapsedTime);
	void integrateVelocityEuler(float elapsedTime);
	void applyForce(Vec3 force);

	void setPosition(Vec3 position);
	void setVelocity(Vec3 velocity);
	void setIsFixed(bool isFixed);
	void setForce(Vec3 force);
	void setMass(float mass);
	void setDamping(float damping);

	Vec3 getPosition();
	Vec3 getVelocity();
	Vec3 getForce();
	bool getIsFixed();
	float getMass();
	float getDamping();
};