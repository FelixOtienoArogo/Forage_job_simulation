#ifndef DURATION_H
#define DURATION_H

#include <string>
#include <map>

class LifeStageDuration{
	private:
		std::map <std::string, int> duration;
	public:
		LifeStageDuration();
		void setDuration(std::string stage, int duration);
		int getDuration(std::string stage) const;
};
class Slider{
	private:
		int maximumValue;
		int minimumValue;
		int currentValue;
	public:
		Slider();
		void setValue(int value);
		int getValue() const;
};
class Duration{
	private:
		int value;
	public:
		Duration();
		int getValue() const;
};
class DurationSetting{
	private:
		std::map<std::string, int> defaultSetting;
	public:
		DurationSetting();
		void setDefault(std::string stage, int duration);
		int getDefault(int stage) const;
};

#endif //DURATION_H
