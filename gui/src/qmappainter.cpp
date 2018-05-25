#include "gui/qmappainter.h"
//#include "moc_qmappainter.cpp"

QMapPainter::QMapPainter( QWidget * parent, const char * name, Qt::WFlags f):
	//QWidget(parent, name, f|WRepaintNoErase|WResizeNoErase){
	QWidget(parent, f){
	m_pixmap=new QPixmap(size());
	m_pixmap->fill(Qt::white);
}

void QMapPainter::resizeEvent(QResizeEvent * sizeev){
	//m_pixmap->resize(sizeev->size());
	m_pixmap->copy(0, 0, sizeev->size().width(), sizeev->size().height());
}

QMapPainter::~QMapPainter(){
	delete m_pixmap;
}


void QMapPainter::timerEvent(QTimerEvent * te) {
        if (te->timerId()==timer) 
		update();
}

void QMapPainter::start(int period){
	timer=startTimer(period);
}


void QMapPainter::paintEvent ( QPaintEvent * ){
	//QImage::bitBlt(this,0,0,m_pixmap,0,0,m_pixmap->width(),m_pixmap->height(),Qt::CopyROP);
	QPainter *p = (QPainter*)this;
	p->drawPixmap(QPoint(0, 0), *m_pixmap, QRect(0, 0, m_pixmap->width(),m_pixmap->height()));
}

