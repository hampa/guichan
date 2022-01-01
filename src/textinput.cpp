#include "guichan/textinput.hpp"
#include <string.h>

namespace gcn
{
TextInput::TextInput(const char *string,
		unsigned int type,
		unsigned int timeStamp)
		: mType(type),
		mTimestamp(timeStamp)
{
	memset(mString, 0, sizeof(mString));
	strncpy(mString, string, strlen(string));
	mString[strlen(string)] = 0;
}

void TextInput::setType(unsigned int type)
{
	mType = type;
}

unsigned int TextInput::getType() const
{
	return mType;
}

void TextInput::setString(const char *string)
{
	strncpy(mString, string, strlen(string));
	mString[strlen(string)] = 0;
}

const char *TextInput::getString() const
{
	return mString;
}

unsigned int TextInput::getTimeStamp() const
{
	return mTimestamp;
}

void TextInput::setTimeStamp(unsigned int timeStamp)
{
	mTimestamp = timeStamp;
}
}
