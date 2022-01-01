#ifndef GCN_TEXTINPUT_HPP
#define GCN_TEXTINPUT_HPP

#include "guichan/platform.hpp"

namespace gcn
{
class GCN_CORE_DECLSPEC TextInput
{
public:

	/**
	* Constructor.
	*/
	TextInput() { };

	/**
	* Constructor.
	*
	* @param string The string input.
	* @param type The type of mouse input.
	* @param timeStamp The timestamp of the text input.
	*/
	TextInput(const char *string,
		unsigned int type,
		unsigned int timeStamp);

	/**
	* Sets the type of the text input.
	*
	* @param type The type of the text input. Should be a value from the
	*             text event type enum
	* @see getType
	* @since 0.1.0
	*/
	void setType(unsigned int type);

	/**
	* Gets the type of the text input.
	*
	* @return The type of the text input. A value from the text event
	*         type enum.
	* @see setType
	* @since 0.1.0
	*/
	unsigned int getType() const;

	/**
	* Sets the string input.
	*
	* @param button The string input. Should be one of the values
	*               in the text event string.
	* @see getString.
	* @since 0.1.0
	*/
	void setString(const char *string);

	/**
	* Gets the string input.
	*
	* @return The string input. A value from the text event
	*         string.
	* @see setString
	* @since 0.1.0
	*/
	const char *getString() const;

	/**
	* Sets the timestamp for the text input.
	*
	* @param timeStamp The timestamp of the text input.
	* @see getTimeStamp
	* @since 0.1.0
	*/
	void setTimeStamp(unsigned int timeStamp);

	/**
	* Gets the time stamp of the input.
	*
	* @return The time stamp of the text input.
	* @see setTimeStamp
	* @since 0.1.0
	*/
	unsigned int getTimeStamp() const;

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
};
}

#endif // end GCN_TEXTINPUT_HPP
