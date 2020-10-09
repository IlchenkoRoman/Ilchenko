#include "paintscene.h"
#include "paint.h"

paintScene::paintScene(QObject *parent) : QGraphicsScene(parent)
{

}

paintScene::~paintScene()
{

}

void paintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (colour == "red"){
    addEllipse(event->scenePos().x() - 5,
               event->scenePos().y() - 5,
               10,
               10,
               QPen(Qt::NoPen),
               QBrush(Qt::red));
    previousPoint = event->scenePos();
    }
    if (colour == "green"){
    addEllipse(event->scenePos().x() - 5,
               event->scenePos().y() - 5,
               10,
               10,
               QPen(Qt::NoPen),
               QBrush(Qt::green));
    previousPoint = event->scenePos();
    }
    if (colour == "blue"){
    addEllipse(event->scenePos().x() - 5,
               event->scenePos().y() - 5,
               10,
               10,
               QPen(Qt::NoPen),
               QBrush(Qt::blue));
    previousPoint = event->scenePos();
    }
    if (colour == "white"){
    addEllipse(event->scenePos().x() - 5,
               event->scenePos().y() - 5,
               10,
               10,
               QPen(Qt::NoPen),
               QBrush(Qt::white));
    previousPoint = event->scenePos();
    }
}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (colour == "red"){
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::red,10,Qt::SolidLine,Qt::RoundCap));
    previousPoint = event->scenePos();
    }
    if (colour == "green"){
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::green,10,Qt::SolidLine,Qt::RoundCap));
    previousPoint = event->scenePos();
    }
    if (colour == "blue"){
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::blue,10,Qt::SolidLine,Qt::RoundCap));
    previousPoint = event->scenePos();
    }
    if (colour == "white"){
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::white,10,Qt::SolidLine,Qt::RoundCap));
    previousPoint = event->scenePos();
    }
}

void paintScene::clrchng(QString lcolour){
    this->colour = lcolour;
    qDebug() << colour;
}
