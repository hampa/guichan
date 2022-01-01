#ifndef GCN_TEXTLISTENER_HPP
#define GCN_TEXTLISTENER_HPP

#include "guichan/textevent.hpp"
#include "guichan/platform.hpp"

namespace gcn
{
    class Key;

    /**
     * Interface for listening for text events from widgets.
     *
     * @see Widget::addTextListener, Widget::removeTextListener
     */
    class GCN_CORE_DECLSPEC TextListener
    {
    public:

        /**
         * Destructor.
         */
        virtual ~TextListener() { }

        /**
         * Called if a text is pressed when the widget has keyboard focus.
         *
         * @param textEvent Discribes the event.
         */
        virtual void textPressed(TextEvent& textEvent) { }

    protected:
        /**
         * Constructor.
         *
         * You should not be able to make an instance of TextListener,
         * therefore its constructor is protected.
         */
        TextListener() { }
    };
}

#endif // end GCN_TEXTLISTENER_HPP
