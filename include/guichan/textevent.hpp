#ifndef GCN_TEXTEVENT_HPP
#define GCN_TEXTEVENT_HPP

#include "guichan/inputevent.hpp"
#include "guichan/platform.hpp"

namespace gcn
{
class Gui;
class Widget;
class GCN_CORE_DECLSPEC TextEvent: public InputEvent
{
public:

	/**
	* Constructor.
	*
	* @param source The source widget of the mouse event.
	* @param isShiftPressed True if shift is pressed, false otherwise.
	* @param isControlPressed True if control is pressed, false otherwise.
	* @param isAltPressed True if alt is pressed, false otherwise.
	* @param isMetaPressed True if meta is pressed, false otherwise.
	* @param type The type of the mouse event.
	* @param string The string of the mouse event.
	* @param timeStamp The timestamp of the text input.
	*/
	TextEvent(Widget* source,
		bool isShiftPressed,
		bool isControlPressed,
		bool isAltPressed,
		bool isMetaPressed,
		unsigned int type,
		const char *string,
		unsigned int timestamp);

	/**
	* Gets the string of the text event.
	*
	* @return The string of the text event.
	*/
	const char *getString() const;

	/**
	* Gets the timestamp of the text entered.
	*
	* @return The timestamp of the text entered.
	*/
	unsigned int getTimestamp() const;

	/**
	* Gets the type of the event.
	*
	* @return The type of the event.
	*/
	unsigned int getType() const;

	/**
	* Text event types.
	*/
	enum
	{
		TEXT = 0,
		EDITOR

	};

protected:
	/**
	* Holds the type of the text event.
	*/
	unsigned int mType;

	/**
	* Holds the string of the text event.
	*/
	char mString[64];

	/**
	* Holds the timestamp of the text event.
	*/
	unsigned int mTimestamp;

	/**
	* Gui is a friend of this class in order to be able to manipulate
	* the protected member variables of this class and at the same time
	* keep the MouseEvent class as const as possible. Gui needs to
	* update the x och y coordinates for the coordinates to be relative
	* to widget the mouse listener receiving the events have registered 
	* to. 
	*/
	friend class Gui;
};
}

#endif // GCN_TEXTEVENT_HPP
