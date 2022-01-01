#include "guichan/textevent.hpp"
#include <string.h>

namespace gcn
{
TextEvent::TextEvent(	Widget* source,
			bool isShiftPressed,
			bool isControlPressed,
			bool isAltPressed,
			bool isMetaPressed,
			unsigned int type,
			const char *string,
			unsigned int timestamp)
			:InputEvent(source,
			isShiftPressed,
			isControlPressed,
			isAltPressed,
			isMetaPressed),
			mType(type),
			mTimestamp(timestamp)
{
	memset(mString, 0, sizeof(mString));
	strncpy(mString, string, strlen(string));
	mString[strlen(string)] = 0;
}

const char *TextEvent::getString() const
{
	return mString;
}

unsigned int TextEvent::getTimestamp() const
{
	return mTimestamp;
}

unsigned int TextEvent::getType() const
{
	return mType;
}
}
