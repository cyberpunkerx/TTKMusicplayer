#ifndef MUSICENHANCEDWIDGET_H
#define MUSICENHANCEDWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QToolButton>
#include "musicglobaldefine.h"

class QLabel;
class QMovie;

/*! @brief The class of the enhanced tool button.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicEnhancedToolButton : public QToolButton
{
    Q_OBJECT
public:
    explicit MusicEnhancedToolButton(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    virtual ~MusicEnhancedToolButton();

    static QString getClassName();
    /*!
     * Get class object name.
     */

protected:
    virtual void enterEvent(QEvent *event) override;
    /*!
     * Override the widget event.
     */

    QLabel *m_label;
    QMovie *m_movie;

};


/*! @brief The class of the enhanced widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicEnhancedWidget : public QToolButton
{
    Q_OBJECT
public:
    explicit MusicEnhancedWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    ~MusicEnhancedWidget();

    static QString getClassName();
    /*!
     * Get class object name.
     */

Q_SIGNALS:
    void enhancedMusicChanged(int type);
    /*!
     * Set enhanced music config changed return selected index.
     */

public Q_SLOTS:
    void setEnhancedMusicConfig(int type);
    /*!
     * Set enhanced music config.
     */
    void caseButtonOnAndOff();
    /*!
     * Case button on and off.
     */

protected:
    void initWidget();
    /*!
     * Create all widget in layout.
     */

    QMenu *m_menu;
    QToolButton *m_caseButton;
    MusicEnhancedToolButton *m_Button1, *m_Button2, *m_Button3, *m_Button4;
    int m_lastSelectedIndex;

};

#endif // MUSICENHANCEDWIDGET_H
