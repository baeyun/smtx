; Check model
(set-logic ALL)
(declare-fun b () Int)
(define-fun c () Int (+ b 1))
(declare-fun a () Int)
(assert (= a c))
(check-sat)
(get-model)
(exit)
